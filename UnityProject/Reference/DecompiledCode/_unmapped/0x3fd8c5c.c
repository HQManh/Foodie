// rea decompile_all
// name: FUN_03fd8c5c
// address: 0x3fd8c5c
// body: available
// range: 0x3fd8c5c-0x3fd8d3b inclusive
// range: 0x3fda320-0x3fda32b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_03fd8c5c(long *param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  bool bVar8;
  int iVar9;
  undefined8 uVar10;
  byte *pbVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined4 uVar18;
  char *pcVar19;
  undefined1 *puVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  byte *pbVar24;
  long lVar25;
  int iVar26;
  int iVar27;
  undefined2 uVar28;
  ulong uVar29;
  byte *pbVar30;
  undefined1 *__dest;
  undefined1 *puVar31;
  byte *pbVar32;
  ulong uVar33;
  uint uVar34;
  ulong uVar35;
  long lVar36;
  uint uVar37;
  uint uVar38;
  int iStack_74;
  undefined4 uStack_64;
  
  iVar9 = FUN_03fd8a50();
  if (((iVar9 == 0) && (__dest = (undefined1 *)param_1[3], __dest != (undefined1 *)0x0)) &&
     ((pbVar32 = (byte *)*param_1, pbVar32 != (byte *)0x0 || ((int)param_1[1] == 0)))) {
    lVar36 = param_1[7];
    iVar9 = *(int *)(lVar36 + 8);
    if (iVar9 == 0x3f3f) {
      iVar9 = 0x3f40;
      *(undefined4 *)(lVar36 + 8) = 0x3f40;
    }
    uVar38 = *(uint *)(param_1 + 4);
    uVar3 = *(uint *)(param_1 + 1);
    lVar21 = lVar36 + 0x558;
    uVar33 = *(ulong *)(lVar36 + 0x50);
    uVar14 = (ulong)*(uint *)(lVar36 + 0x58);
    lVar1 = lVar36 + 0x98;
    uVar35 = (ulong)uVar3;
    iStack_74 = 0;
    uVar37 = uVar38;
    do {
      uVar13 = (uint)uVar14;
      uVar15 = (uint)uVar35;
      pbVar24 = pbVar32;
      iVar26 = -3;
      switch(iVar9) {
      case 0x3f34:
        uVar15 = *(uint *)(lVar36 + 0x10);
        if (uVar15 == 0) {
          uVar18 = 0x3f40;
          goto code_r0x03fda2ec;
        }
        if (uVar13 < 0x10) {
          lVar22 = 0;
          do {
            if ((int)uVar35 == 0) goto code_r0x03fda340;
            pbVar32 = pbVar24 + 1;
            uVar12 = uVar14 + lVar22;
            lVar22 = lVar22 + 8;
            uVar35 = (ulong)((int)uVar35 - 1);
            uVar33 = ((ulong)*pbVar24 << (uVar12 & 0x3f)) + uVar33;
            pbVar24 = pbVar32;
          } while ((uVar14 + lVar22) - 8 < 8);
          uVar14 = (ulong)(uVar13 + (int)lVar22);
        }
        if (((uVar15 >> 1 & 1) == 0) || (uVar33 != 0x8b1f)) {
          if (*(long *)(lVar36 + 0x30) != 0) {
            *(undefined4 *)(*(long *)(lVar36 + 0x30) + 0x48) = 0xffffffff;
          }
          if (((uVar15 & 1) == 0) ||
             (0x842108421084210 < ((uVar33 & 0xff) * 0x100 + (uVar33 >> 8)) * -0x1084210842108421))
          {
            pcVar19 = "incorrect header check";
            break;
          }
          if ((uVar33 & 0xf) != 8) goto code_r0x03fda2dc;
          uVar12 = uVar33 >> 4 & 0xf;
          uVar17 = (uint)uVar12;
          uVar13 = uVar17 + 8;
          uVar15 = *(uint *)(lVar36 + 0x38);
          if (*(uint *)(lVar36 + 0x38) == 0) {
            *(uint *)(lVar36 + 0x38) = uVar13;
            uVar15 = uVar13;
          }
          if ((uVar17 < 8) && (uVar13 <= uVar15)) {
            *(undefined4 *)(lVar36 + 0x18) = 0;
            *(int *)(lVar36 + 0x1c) = 0x100 << uVar12;
            lVar22 = FUN_03fdad2c(0,0,0);
            uVar18 = 0x3f3f;
            if ((uVar33 & 0x2000) != 0) {
              uVar18 = 0x3f3d;
            }
            uVar14 = 0;
            *(long *)(lVar36 + 0x20) = lVar22;
            uVar33 = 0;
            param_1[0xc] = lVar22;
          }
          else {
            uVar33 = uVar33 >> 4;
            param_1[6] = (long)"invalid window size";
            uVar18 = 0x3f51;
            uVar14 = (ulong)((int)uVar14 - 4);
          }
          goto code_r0x03fda2ec;
        }
        if (*(int *)(lVar36 + 0x38) == 0) {
          *(undefined4 *)(lVar36 + 0x38) = 0xf;
        }
        uVar10 = FUN_03fda9f8(0,0,0);
        *(undefined8 *)(lVar36 + 0x20) = uVar10;
        uStack_64 = CONCAT22(uStack_64._2_2_,0x8b1f);
        uVar10 = FUN_03fda9f8(uVar10,&uStack_64,2);
        uVar33 = 0;
        uVar14 = 0;
        *(undefined8 *)(lVar36 + 0x20) = uVar10;
        *(undefined4 *)(lVar36 + 8) = 0x3f35;
        goto code_r0x03fda2f0;
      case 0x3f35:
        if (uVar13 < 0x10) {
          lVar22 = 0;
          do {
            if ((int)uVar35 == 0) {
              uVar13 = uVar13 + (int)lVar22;
              uVar15 = 0;
              iVar26 = iStack_74;
              goto code_r0x03fda3cc;
            }
            pbVar32 = pbVar24 + 1;
            uVar12 = uVar14 + lVar22;
            lVar22 = lVar22 + 8;
            uVar35 = (ulong)((int)uVar35 - 1);
            uVar33 = ((ulong)*pbVar24 << (uVar12 & 0x3f)) + uVar33;
            pbVar24 = pbVar32;
          } while ((uVar14 + lVar22) - 8 < 8);
          uVar14 = (ulong)(uVar13 + (int)lVar22);
        }
        uVar13 = (uint)uVar33;
        *(uint *)(lVar36 + 0x18) = uVar13;
        if ((uVar13 & 0xff) == 8) {
          if ((uVar33 & 0xe000) == 0) {
            if (*(uint **)(lVar36 + 0x30) != (uint *)0x0) {
              **(uint **)(lVar36 + 0x30) = uVar13 >> 8 & 1;
            }
            if (((uVar13 >> 9 & 1) != 0) && ((*(byte *)(lVar36 + 0x10) >> 2 & 1) != 0)) {
              uStack_64 = CONCAT22(uStack_64._2_2_,(short)uVar33);
              uVar10 = FUN_03fda9f8(*(undefined8 *)(lVar36 + 0x20),&uStack_64,2);
              *(undefined8 *)(lVar36 + 0x20) = uVar10;
            }
            uVar14 = 0;
            uVar33 = 0;
            *(undefined4 *)(lVar36 + 8) = 0x3f36;
            goto code_r0x03fd97a8;
          }
          pcVar19 = "unknown header flags set";
        }
        else {
code_r0x03fda2dc:
          pcVar19 = "unknown compression method";
        }
        break;
      case 0x3f36:
        if (uVar13 < 0x20) {
code_r0x03fd97a8:
          do {
            if ((int)uVar35 == 0) goto code_r0x03fda34c;
            bVar8 = uVar14 < 0x18;
            uVar35 = (ulong)((int)uVar35 - 1);
            uVar12 = uVar14 & 0x3f;
            uVar14 = uVar14 + 8;
            uVar33 = ((ulong)*pbVar32 << uVar12) + uVar33;
            pbVar24 = pbVar32 + 1;
            pbVar32 = pbVar32 + 1;
          } while (bVar8);
        }
        if (*(long *)(lVar36 + 0x30) != 0) {
          *(ulong *)(*(long *)(lVar36 + 0x30) + 8) = uVar33;
        }
        if (((*(byte *)(lVar36 + 0x19) >> 1 & 1) != 0) && ((*(byte *)(lVar36 + 0x10) >> 2 & 1) != 0)
           ) {
          uStack_64 = (undefined4)uVar33;
          uVar10 = FUN_03fda9f8(*(undefined8 *)(lVar36 + 0x20),&uStack_64,4);
          *(undefined8 *)(lVar36 + 0x20) = uVar10;
        }
        uVar14 = 0;
        uVar33 = 0;
        *(undefined4 *)(lVar36 + 8) = 0x3f37;
code_r0x03fd9820:
        do {
          pbVar32 = pbVar24;
          if ((int)uVar35 == 0) goto code_r0x03fda34c;
          pbVar32 = pbVar24 + 1;
          bVar8 = uVar14 < 8;
          uVar35 = (ulong)((int)uVar35 - 1);
          uVar12 = uVar14 & 0x3f;
          uVar14 = uVar14 + 8;
          uVar33 = ((ulong)*pbVar24 << uVar12) + uVar33;
          pbVar24 = pbVar32;
        } while (bVar8);
        goto code_r0x03fd9840;
      case 0x3f37:
        if (uVar13 < 0x10) goto code_r0x03fd9820;
code_r0x03fd9840:
        lVar22 = *(long *)(lVar36 + 0x30);
        if (lVar22 != 0) {
          *(uint *)(lVar22 + 0x10) = (uint)uVar33 & 0xff;
          *(int *)(lVar22 + 0x14) = (int)(uVar33 >> 8);
        }
        if (((*(byte *)(lVar36 + 0x19) >> 1 & 1) != 0) && ((*(byte *)(lVar36 + 0x10) >> 2 & 1) != 0)
           ) {
          uStack_64 = CONCAT22(uStack_64._2_2_,(short)uVar33);
          uVar10 = FUN_03fda9f8(*(undefined8 *)(lVar36 + 0x20),&uStack_64,2);
          *(undefined8 *)(lVar36 + 0x20) = uVar10;
        }
        uVar15 = *(uint *)(lVar36 + 0x18);
        uVar33 = 0;
        uVar14 = 0;
        *(undefined4 *)(lVar36 + 8) = 0x3f38;
        pbVar24 = pbVar32;
        uVar12 = 0;
        if ((uVar15 >> 10 & 1) == 0) {
code_r0x03fd98b4:
          if (*(long *)(lVar36 + 0x30) != 0) {
            *(undefined8 *)(*(long *)(lVar36 + 0x30) + 0x18) = 0;
          }
        }
        else {
code_r0x03fd98cc:
          do {
            uVar14 = uVar12;
            if ((int)uVar35 == 0) goto code_r0x03fda364;
            pbVar32 = pbVar24 + 1;
            uVar35 = (ulong)((int)uVar35 - 1);
            uVar33 = ((ulong)*pbVar24 << (uVar14 & 0x3f)) + uVar33;
            pbVar24 = pbVar32;
            uVar12 = uVar14 + 8;
          } while (uVar14 < 8);
code_r0x03fd98f0:
          *(int *)(lVar36 + 0x5c) = (int)uVar33;
          if (*(long *)(lVar36 + 0x30) != 0) {
            *(int *)(*(long *)(lVar36 + 0x30) + 0x20) = (int)uVar33;
          }
          if (((uVar15 >> 9 & 1) == 0) || ((*(byte *)(lVar36 + 0x10) >> 2 & 1) == 0)) {
            uVar33 = 0;
            uVar14 = 0;
          }
          else {
            uStack_64 = CONCAT22(uStack_64._2_2_,(short)uVar33);
            uVar10 = FUN_03fda9f8(*(undefined8 *)(lVar36 + 0x20),&uStack_64,2);
            uVar33 = 0;
            uVar14 = 0;
            *(undefined8 *)(lVar36 + 0x20) = uVar10;
          }
        }
        *(undefined4 *)(lVar36 + 8) = 0x3f39;
        pbVar24 = pbVar32;
code_r0x03fd9954:
        uVar13 = (uint)uVar14;
        uVar15 = *(uint *)(lVar36 + 0x18);
        if ((uVar15 >> 10 & 1) != 0) {
          uVar16 = *(uint *)(lVar36 + 0x5c);
          uVar34 = (uint)uVar35;
          uVar17 = uVar16;
          if (uVar34 <= uVar16) {
            uVar17 = uVar34;
          }
          if (uVar17 != 0) {
            lVar22 = *(long *)(lVar36 + 0x30);
            if ((lVar22 != 0) && (*(long *)(lVar22 + 0x18) != 0)) {
              uVar2 = *(uint *)(lVar22 + 0x24);
              uVar16 = *(int *)(lVar22 + 0x20) - uVar16;
              if (uVar16 <= uVar2 && uVar2 - uVar16 != 0) {
                uVar15 = uVar2 - uVar16;
                if (uVar16 + uVar17 <= uVar2) {
                  uVar15 = uVar17;
                }
                memcpy((void *)(*(long *)(lVar22 + 0x18) + (ulong)uVar16),pbVar24,(ulong)uVar15);
                uVar15 = *(uint *)(lVar36 + 0x18);
              }
            }
            if (((uVar15 >> 9 & 1) != 0) && ((*(byte *)(lVar36 + 0x10) >> 2 & 1) != 0)) {
              uVar10 = FUN_03fda9f8(*(undefined8 *)(lVar36 + 0x20),pbVar24,uVar17);
              *(undefined8 *)(lVar36 + 0x20) = uVar10;
            }
            pbVar24 = pbVar24 + uVar17;
            uVar35 = (ulong)(uVar34 - uVar17);
            uVar16 = *(int *)(lVar36 + 0x5c) - uVar17;
            *(uint *)(lVar36 + 0x5c) = uVar16;
          }
          uVar15 = (uint)uVar35;
          iVar26 = iStack_74;
          if (uVar16 != 0) goto code_r0x03fda3cc;
        }
        *(undefined4 *)(lVar36 + 0x5c) = 0;
        *(undefined4 *)(lVar36 + 8) = 0x3f3a;
code_r0x03fd9a34:
        uVar13 = (uint)uVar14;
        iVar9 = (int)uVar35;
        if ((*(byte *)(lVar36 + 0x19) >> 3 & 1) == 0) {
          if (*(long *)(lVar36 + 0x30) != 0) {
            *(undefined8 *)(*(long *)(lVar36 + 0x30) + 0x28) = 0;
          }
code_r0x03fd9af8:
          *(undefined4 *)(lVar36 + 0x5c) = 0;
          *(undefined4 *)(lVar36 + 8) = 0x3f3b;
code_r0x03fd9b04:
          uVar13 = (uint)uVar14;
          iVar9 = (int)uVar35;
          if ((*(byte *)(lVar36 + 0x19) >> 4 & 1) == 0) {
            if (*(long *)(lVar36 + 0x30) != 0) {
              *(undefined8 *)(*(long *)(lVar36 + 0x30) + 0x38) = 0;
            }
          }
          else {
            uVar15 = 0;
            iVar26 = iStack_74;
            if (iVar9 == 0) goto code_r0x03fda3cc;
            uVar12 = 0;
            do {
              lVar22 = *(long *)(lVar36 + 0x30);
              bVar4 = pbVar24[uVar12];
              if ((lVar22 != 0) && (lVar25 = *(long *)(lVar22 + 0x38), lVar25 != 0)) {
                uVar15 = *(uint *)(lVar36 + 0x5c);
                if (uVar15 < *(uint *)(lVar22 + 0x40)) {
                  *(uint *)(lVar36 + 0x5c) = uVar15 + 1;
                  *(byte *)(lVar25 + (ulong)uVar15) = bVar4;
                }
              }
              uVar12 = uVar12 + 1;
            } while ((bVar4 != 0) && (uVar12 < (uVar35 & 0xffffffff)));
            if (((*(byte *)(lVar36 + 0x19) >> 1 & 1) != 0) &&
               ((*(byte *)(lVar36 + 0x10) >> 2 & 1) != 0)) {
              uVar10 = FUN_03fda9f8(*(undefined8 *)(lVar36 + 0x20),pbVar24,uVar12 & 0xffffffff);
              *(undefined8 *)(lVar36 + 0x20) = uVar10;
            }
            pbVar24 = pbVar24 + uVar12;
            if (bVar4 != 0) goto code_r0x03fda3a0;
            uVar35 = (uVar35 & 0xffffffff) - uVar12;
          }
          *(undefined4 *)(lVar36 + 8) = 0x3f3c;
          pbVar32 = pbVar24;
code_r0x03fd9bd0:
          uVar13 = (uint)uVar14;
          if ((*(uint *)(lVar36 + 0x18) >> 9 & 1) != 0) {
            if (uVar13 < 0x10) {
              lVar22 = 0;
              pbVar24 = pbVar32;
              do {
                if ((int)uVar35 == 0) goto code_r0x03fda340;
                pbVar32 = pbVar24 + 1;
                uVar12 = uVar14 + lVar22;
                lVar22 = lVar22 + 8;
                uVar35 = (ulong)((int)uVar35 - 1);
                uVar33 = ((ulong)*pbVar24 << (uVar12 & 0x3f)) + uVar33;
                pbVar24 = pbVar32;
              } while ((uVar14 + lVar22) - 8 < 8);
              uVar14 = (ulong)(uVar13 + (int)lVar22);
            }
            if (((*(byte *)(lVar36 + 0x10) >> 2 & 1) != 0) && (uVar33 != *(ushort *)(lVar36 + 0x20))
               ) {
              pcVar19 = "header crc mismatch";
              break;
            }
            uVar33 = 0;
            uVar14 = 0;
          }
          lVar22 = *(long *)(lVar36 + 0x30);
          if (lVar22 != 0) {
            *(uint *)(lVar22 + 0x44) = *(uint *)(lVar36 + 0x18) >> 9 & 1;
            *(undefined4 *)(lVar22 + 0x48) = 1;
          }
          lVar22 = FUN_03fda9f8(0,0,0);
          uVar18 = 0x3f3f;
          *(long *)(lVar36 + 0x20) = lVar22;
          param_1[0xc] = lVar22;
code_r0x03fd9c68:
          *(undefined4 *)(lVar36 + 8) = uVar18;
          goto code_r0x03fda2f0;
        }
        uVar15 = 0;
        iVar26 = iStack_74;
        if (iVar9 != 0) {
          uVar12 = 0;
          do {
            lVar22 = *(long *)(lVar36 + 0x30);
            bVar4 = pbVar24[uVar12];
            if ((lVar22 != 0) && (lVar25 = *(long *)(lVar22 + 0x28), lVar25 != 0)) {
              uVar15 = *(uint *)(lVar36 + 0x5c);
              if (uVar15 < *(uint *)(lVar22 + 0x30)) {
                *(uint *)(lVar36 + 0x5c) = uVar15 + 1;
                *(byte *)(lVar25 + (ulong)uVar15) = bVar4;
              }
            }
            uVar12 = uVar12 + 1;
          } while ((bVar4 != 0) && (uVar12 < (uVar35 & 0xffffffff)));
          if (((*(byte *)(lVar36 + 0x19) >> 1 & 1) != 0) &&
             ((*(byte *)(lVar36 + 0x10) >> 2 & 1) != 0)) {
            uVar10 = FUN_03fda9f8(*(undefined8 *)(lVar36 + 0x20),pbVar24,uVar12 & 0xffffffff);
            *(undefined8 *)(lVar36 + 0x20) = uVar10;
          }
          pbVar24 = pbVar24 + uVar12;
          if (bVar4 == 0) {
            uVar35 = (uVar35 & 0xffffffff) - uVar12;
            goto code_r0x03fd9af8;
          }
code_r0x03fda3a0:
          uVar15 = iVar9 - (int)uVar12;
          iVar26 = iStack_74;
        }
        goto code_r0x03fda3cc;
      case 0x3f38:
        uVar15 = *(uint *)(lVar36 + 0x18);
        if ((uVar15 >> 10 & 1) != 0) {
          uVar12 = uVar14;
          if (uVar13 < 0x10) goto code_r0x03fd98cc;
          goto code_r0x03fd98f0;
        }
        goto code_r0x03fd98b4;
      case 0x3f39:
        goto code_r0x03fd9954;
      case 0x3f3a:
        goto code_r0x03fd9a34;
      case 0x3f3b:
        goto code_r0x03fd9b04;
      case 0x3f3c:
        goto code_r0x03fd9bd0;
      case 0x3f3d:
        if (uVar13 < 0x20) {
          do {
            if ((int)uVar35 == 0) goto code_r0x03fda364;
            pbVar32 = pbVar24 + 1;
            bVar8 = uVar14 < 0x18;
            uVar35 = (ulong)((int)uVar35 - 1);
            uVar12 = uVar14 & 0x3f;
            uVar14 = uVar14 + 8;
            uVar33 = ((ulong)*pbVar24 << uVar12) + uVar33;
            pbVar24 = pbVar32;
          } while (bVar8);
        }
        uVar14 = 0;
        uVar13 = ((uint)uVar33 & 0xff00ff00) >> 8 | ((uint)uVar33 & 0xff00ff) << 8;
        uVar12 = (ulong)(uVar13 >> 0x10 | uVar13 << 0x10);
        uVar33 = 0;
        *(ulong *)(lVar36 + 0x20) = uVar12;
        param_1[0xc] = uVar12;
        *(undefined4 *)(lVar36 + 8) = 0x3f3e;
      case 0x3f3e:
        if (*(int *)(lVar36 + 0x14) == 0) {
          param_1[3] = (long)__dest;
          *(uint *)(param_1 + 4) = uVar38;
          *param_1 = (long)pbVar32;
          *(int *)(param_1 + 1) = (int)uVar35;
          *(ulong *)(lVar36 + 0x50) = uVar33;
          *(int *)(lVar36 + 0x58) = (int)uVar14;
          return 2;
        }
        lVar22 = FUN_03fdad2c(0,0,0);
        *(long *)(lVar36 + 0x20) = lVar22;
        param_1[0xc] = lVar22;
        *(undefined4 *)(lVar36 + 8) = 0x3f3f;
        pbVar24 = pbVar32;
code_r0x03fd8f84:
        uVar13 = (uint)uVar14;
        uVar15 = (uint)uVar35;
        pbVar32 = pbVar24;
        iVar26 = iStack_74;
        if (param_2 - 5U < 2) goto code_r0x03fda3cc;
code_r0x03fd8f90:
        uVar13 = (uint)uVar14;
        if (*(int *)(lVar36 + 0xc) != 0) {
          uVar14 = (ulong)(uVar13 & 0xfffffff8);
          uVar33 = uVar33 >> (uVar13 & 7);
          uVar18 = 0x3f4e;
          goto code_r0x03fda2ec;
        }
        if (uVar13 < 3) {
          uVar15 = 0;
          pbVar24 = pbVar32;
          iVar26 = iStack_74;
          if ((int)uVar35 == 0) goto code_r0x03fda3cc;
          uVar13 = uVar13 | 8;
          uVar35 = (ulong)((int)uVar35 - 1);
          uVar33 = ((ulong)*pbVar32 << (uVar14 & 0x3f)) + uVar33;
          pbVar32 = pbVar32 + 1;
        }
        uVar15 = (uint)uVar35;
        uVar17 = (uint)uVar33 >> 1 & 3;
        *(uint *)(lVar36 + 0xc) = (uint)uVar33 & 1;
        if (uVar17 < 2) {
          if (uVar17 == 0) {
            uVar18 = 0x3f41;
            goto code_r0x03fd9678;
          }
          *(undefined **)(lVar36 + 0x68) = &UNK_023abdf6;
          *(undefined **)(lVar36 + 0x70) = &UNK_023ac5f6;
          *(undefined8 *)(lVar36 + 0x78) = 0x500000009;
          *(undefined4 *)(lVar36 + 8) = 0x3f47;
          if (param_2 == 6) {
            uVar33 = uVar33 >> 3;
            uVar13 = uVar13 - 3;
            pbVar24 = pbVar32;
            iVar26 = iStack_74;
            goto code_r0x03fda3cc;
          }
        }
        else {
          if (uVar17 == 2) {
            uVar18 = 0x3f44;
          }
          else {
            param_1[6] = (long)"invalid block type";
            uVar18 = 0x3f51;
          }
code_r0x03fd9678:
          *(undefined4 *)(lVar36 + 8) = uVar18;
        }
        uVar33 = uVar33 >> 3;
        uVar14 = (ulong)(uVar13 - 3);
        goto code_r0x03fda2f0;
      case 0x3f3f:
        goto code_r0x03fd8f84;
      case 0x3f40:
        goto code_r0x03fd8f90;
      case 0x3f41:
        uVar17 = uVar13 & 0xfffffff8;
        uVar33 = uVar33 >> (uVar13 & 7);
        if (uVar17 < 0x20) {
          lVar22 = 0;
          do {
            if ((int)uVar35 == 0) {
              uVar13 = (uVar13 & 0xfffffff8) + (int)lVar22;
              uVar15 = 0;
              iVar26 = iStack_74;
              goto code_r0x03fda3cc;
            }
            pbVar32 = pbVar24 + 1;
            uVar14 = (ulong)uVar17 + lVar22;
            lVar22 = lVar22 + 8;
            uVar35 = (ulong)((int)uVar35 - 1);
            uVar33 = ((ulong)*pbVar24 << (uVar14 & 0x3f)) + uVar33;
            pbVar24 = pbVar32;
          } while (((ulong)uVar17 + lVar22) - 8 < 0x18);
          uVar17 = uVar17 + (int)lVar22;
        }
        uVar15 = (uint)uVar35;
        uVar14 = (ulong)uVar17;
        if ((uVar33 & 0xffff ^ uVar33 >> 0x10) == 0xffff) {
          uVar14 = 0;
          uVar13 = 0;
          uVar17 = (uint)uVar33;
          uVar33 = 0;
          *(uint *)(lVar36 + 0x5c) = uVar17 & 0xffff;
          *(undefined4 *)(lVar36 + 8) = 0x3f42;
          pbVar24 = pbVar32;
          iVar26 = iStack_74;
          if (param_2 != 6) goto code_r0x03fd9298;
          goto code_r0x03fda3cc;
        }
        pcVar19 = "invalid stored block lengths";
        break;
      case 0x3f42:
code_r0x03fd9298:
        *(undefined4 *)(lVar36 + 8) = 0x3f43;
      case 0x3f43:
        uVar13 = (uint)uVar14;
        uVar15 = (uint)uVar35;
        uVar17 = *(uint *)(lVar36 + 0x5c);
        if (uVar17 == 0) {
          uVar18 = 0x3f3f;
          goto code_r0x03fda2ec;
        }
        if (uVar15 <= uVar17) {
          uVar17 = uVar15;
        }
        if (uVar38 <= uVar17) {
          uVar17 = uVar38;
        }
        pbVar24 = pbVar32;
        iVar26 = iStack_74;
        if (uVar17 != 0) {
          memcpy(__dest,pbVar32,(ulong)uVar17);
          pbVar32 = pbVar32 + uVar17;
          __dest = __dest + uVar17;
          uVar35 = (ulong)(uVar15 - uVar17);
          uVar38 = uVar38 - uVar17;
          *(uint *)(lVar36 + 0x5c) = *(int *)(lVar36 + 0x5c) - uVar17;
          goto code_r0x03fda2f0;
        }
        goto code_r0x03fda3cc;
      case 0x3f44:
        if (uVar13 < 0xe) {
          lVar22 = 0;
          do {
            if ((int)uVar35 == 0) goto code_r0x03fda340;
            pbVar32 = pbVar24 + 1;
            uVar12 = uVar14 + lVar22;
            lVar22 = lVar22 + 8;
            uVar35 = (ulong)((int)uVar35 - 1);
            uVar33 = ((ulong)*pbVar24 << (uVar12 & 0x3f)) + uVar33;
            pbVar24 = pbVar32;
          } while ((uVar14 + lVar22) - 8 < 6);
          uVar13 = uVar13 + (int)lVar22;
        }
        uVar23 = uVar33 >> 5 & 0x1f;
        uVar14 = uVar33 >> 10;
        uVar29 = uVar33 & 0x1f;
        uVar33 = uVar33 >> 0xe;
        uVar12 = (uVar14 & 0xf) + 4;
        uVar14 = (ulong)(uVar13 - 0xe);
        *(int *)(lVar36 + 0x84) = (int)uVar29 + 0x101;
        *(int *)(lVar36 + 0x88) = (int)uVar23 + 1;
        *(int *)(lVar36 + 0x80) = (int)uVar12;
        if ((uVar29 < 0x1e) && (uVar23 < 0x1e)) {
          uVar29 = 0;
          *(undefined4 *)(lVar36 + 0x8c) = 0;
          *(undefined4 *)(lVar36 + 8) = 0x3f45;
code_r0x03fd9184:
          do {
            uVar23 = uVar12;
            uVar13 = (uint)uVar14;
            pbVar24 = pbVar32;
            if (uVar13 < 3) {
              if ((int)uVar35 == 0) {
                uVar15 = 0;
                iVar26 = iStack_74;
                goto code_r0x03fda3cc;
              }
              pbVar24 = pbVar32 + 1;
              uVar13 = uVar13 | 8;
              uVar35 = (ulong)((int)uVar35 - 1);
              uVar33 = ((ulong)*pbVar32 << (uVar14 & 0x3f)) + uVar33;
            }
            uVar6 = *(ushort *)(&UNK_023abdd0 + uVar29 * 2);
            uVar7 = (ushort)uVar33;
            uVar29 = uVar29 + 1;
            uVar33 = uVar33 >> 3;
            uVar14 = (ulong)(uVar13 - 3);
            *(int *)(lVar36 + 0x8c) = (int)uVar29;
            *(ushort *)(lVar36 + (ulong)uVar6 * 2 + 0x98) = uVar7 & 7;
            pbVar32 = pbVar24;
            uVar12 = uVar23;
          } while (uVar23 != uVar29);
          goto code_r0x03fd91dc;
        }
        pcVar19 = "too many length or distance symbols";
        break;
      case 0x3f45:
        uVar23 = (ulong)*(uint *)(lVar36 + 0x8c);
        uVar29 = uVar23;
        pbVar24 = pbVar32;
        uVar12 = (ulong)*(uint *)(lVar36 + 0x80);
        if (uVar23 < *(uint *)(lVar36 + 0x80)) goto code_r0x03fd9184;
code_r0x03fd91dc:
        if (uVar23 < 0x13) {
          do {
            lVar22 = uVar23 * 2;
            uVar23 = uVar23 + 1;
            *(undefined2 *)(lVar36 + (ulong)*(ushort *)(&UNK_023abdd0 + lVar22) * 2 + 0x98) = 0;
          } while ((int)uVar23 != 0x13);
          *(undefined4 *)(lVar36 + 0x8c) = 0x13;
        }
        *(long *)(lVar36 + 0x90) = lVar21;
        *(long *)(lVar36 + 0x68) = lVar21;
        *(undefined4 *)(lVar36 + 0x78) = 7;
        iStack_74 = FUN_03fdf58c(0,lVar1,0x13,lVar36 + 0x90,lVar36 + 0x78,lVar36 + 0x318);
        pbVar32 = pbVar24;
        if (iStack_74 == 0) {
          uVar15 = 0;
          iStack_74 = 0;
          *(undefined4 *)(lVar36 + 0x8c) = 0;
          *(undefined4 *)(lVar36 + 8) = 0x3f46;
          goto code_r0x03fd9364;
        }
        param_1[6] = (long)"invalid code lengths set";
        uVar18 = 0x3f51;
        goto code_r0x03fd9c68;
      case 0x3f46:
        uVar15 = *(uint *)(lVar36 + 0x8c);
code_r0x03fd9364:
        iVar9 = *(int *)(lVar36 + 0x84);
        uVar17 = *(int *)(lVar36 + 0x88) + iVar9;
        if (uVar15 < uVar17) {
          lVar22 = *(long *)(lVar36 + 0x68);
          uVar16 = ~(-1 << (ulong)(*(uint *)(lVar36 + 0x78) & 0x1f));
          pbVar24 = pbVar32;
          do {
            uVar34 = (uint)uVar35;
            uVar29 = (ulong)(uVar16 & (uint)uVar33);
            bVar4 = *(byte *)(lVar22 + uVar29 * 4 + 1);
            uVar12 = (ulong)bVar4;
            uVar13 = (uint)uVar14;
            pbVar32 = pbVar24;
            if (uVar13 < bVar4) {
              lVar25 = 0;
              uVar35 = uVar35 & 0xffffffff;
              pbVar30 = pbVar24;
              do {
                if ((int)uVar35 == 0) goto code_r0x03fda32c;
                pbVar32 = pbVar30 + 1;
                uVar12 = uVar14 + lVar25;
                lVar25 = lVar25 + 8;
                uVar35 = (ulong)((int)uVar35 - 1);
                uVar33 = ((ulong)*pbVar30 << (uVar12 & 0x3f)) + uVar33;
                uVar29 = (ulong)(uVar16 & (uint)uVar33);
                uVar12 = (ulong)*(byte *)(lVar22 + uVar29 * 4 + 1);
                pbVar30 = pbVar32;
              } while (uVar14 + lVar25 < uVar12);
              uVar14 = (ulong)(uVar13 + (int)lVar25);
            }
            uVar6 = *(ushort *)(lVar22 + uVar29 * 4 + 2);
            uVar13 = (uint)uVar14;
            iVar26 = (int)uVar12;
            if (0xf < uVar6) {
              pbVar24 = pbVar32;
              if (uVar6 == 0x10) {
                if (uVar13 < iVar26 + 2U) {
                  lVar25 = 0;
                  do {
                    if ((int)uVar35 == 0) goto code_r0x03fda398;
                    pbVar32 = pbVar24 + 1;
                    uVar29 = uVar14 + lVar25;
                    lVar25 = lVar25 + 8;
                    uVar35 = (ulong)((int)uVar35 - 1);
                    uVar33 = ((ulong)*pbVar24 << (uVar29 & 0x3f)) + uVar33;
                    pbVar24 = pbVar32;
                  } while (uVar14 + lVar25 < (ulong)(iVar26 + 2U));
                  uVar13 = uVar13 + (int)lVar25;
                }
                uVar33 = uVar33 >> (uVar12 & 0x3f);
                uVar14 = (ulong)(uVar13 - iVar26);
                if (uVar15 != 0) {
                  uVar14 = (ulong)((uVar13 - iVar26) - 2);
                  uVar28 = *(undefined2 *)(lVar36 + (ulong)(uVar15 - 1) * 2 + 0x98);
                  uVar13 = (uint)uVar33;
                  uVar33 = uVar33 >> 2;
                  iVar27 = (uVar13 & 3) + 3;
                  goto code_r0x03fd9558;
                }
              }
              else {
                if (uVar6 == 0x11) {
                  if (uVar13 < iVar26 + 3U) {
                    lVar25 = 0;
                    do {
                      if ((int)uVar35 == 0) goto code_r0x03fda398;
                      pbVar32 = pbVar24 + 1;
                      uVar29 = uVar14 + lVar25;
                      lVar25 = lVar25 + 8;
                      uVar35 = (ulong)((int)uVar35 - 1);
                      uVar33 = ((ulong)*pbVar24 << (uVar29 & 0x3f)) + uVar33;
                      pbVar24 = pbVar32;
                    } while (uVar14 + lVar25 < (ulong)(iVar26 + 3U));
                    uVar13 = uVar13 + (int)lVar25;
                  }
                  uVar14 = uVar33 >> (uVar12 & 0x3f);
                  uVar28 = 0;
                  uVar33 = uVar14 >> 3;
                  iVar27 = ((uint)uVar14 & 7) + 3;
                  uVar14 = (ulong)((uVar13 - iVar26) - 3);
                }
                else {
                  if (uVar13 < iVar26 + 7U) {
                    lVar25 = 0;
                    do {
                      if ((int)uVar35 == 0) goto code_r0x03fda398;
                      pbVar32 = pbVar24 + 1;
                      uVar29 = uVar14 + lVar25;
                      lVar25 = lVar25 + 8;
                      uVar35 = (ulong)((int)uVar35 - 1);
                      uVar33 = ((ulong)*pbVar24 << (uVar29 & 0x3f)) + uVar33;
                      pbVar24 = pbVar32;
                    } while (uVar14 + lVar25 < (ulong)(iVar26 + 7U));
                    uVar13 = uVar13 + (int)lVar25;
                  }
                  uVar14 = uVar33 >> (uVar12 & 0x3f);
                  uVar28 = 0;
                  uVar33 = uVar14 >> 7;
                  iVar27 = ((uint)uVar14 & 0x7f) + 0xb;
                  uVar14 = (ulong)((uVar13 - iVar26) - 7);
                }
code_r0x03fd9558:
                if (iVar27 + uVar15 <= uVar17) {
                  do {
                    uVar12 = (ulong)uVar15;
                    iVar27 = iVar27 + -1;
                    uVar15 = uVar15 + 1;
                    *(undefined2 *)(lVar36 + uVar12 * 2 + 0x98) = uVar28;
                  } while (iVar27 != 0);
                  *(uint *)(lVar36 + 0x8c) = uVar15;
                  goto code_r0x03fd957c;
                }
              }
              pcVar19 = "invalid bit length repeat";
              goto code_r0x03fda2e4;
            }
            uVar29 = (ulong)uVar15;
            uVar15 = uVar15 + 1;
            uVar33 = uVar33 >> (uVar12 & 0x3f);
            *(uint *)(lVar36 + 0x8c) = uVar15;
            uVar14 = (ulong)(uVar13 - iVar26);
            *(ushort *)(lVar36 + uVar29 * 2 + 0x98) = uVar6;
code_r0x03fd957c:
            pbVar24 = pbVar32;
          } while (uVar15 < uVar17);
        }
        uVar13 = (uint)uVar14;
        uVar15 = (uint)uVar35;
        if (*(short *)(lVar36 + 0x298) != 0) {
          *(long *)(lVar36 + 0x90) = lVar21;
          *(long *)(lVar36 + 0x68) = lVar21;
          *(undefined4 *)(lVar36 + 0x78) = 9;
          iStack_74 = FUN_03fdf58c(1,lVar1,iVar9,lVar36 + 0x90,lVar36 + 0x78,lVar36 + 0x318);
          if (iStack_74 == 0) {
            *(undefined8 *)(lVar36 + 0x70) = *(undefined8 *)(lVar36 + 0x90);
            *(undefined4 *)(lVar36 + 0x7c) = 6;
            iStack_74 = FUN_03fdf58c(2,lVar1 + (ulong)*(uint *)(lVar36 + 0x84) * 2,
                                     *(undefined4 *)(lVar36 + 0x88),lVar36 + 0x90,lVar36 + 0x7c,
                                     lVar36 + 0x318);
            if (iStack_74 == 0) {
              iStack_74 = 0;
              *(undefined4 *)(lVar36 + 8) = 0x3f47;
              pbVar24 = pbVar32;
              iVar26 = iStack_74;
              if (param_2 != 6) goto code_r0x03fd9d8c;
              goto code_r0x03fda3cc;
            }
            pcVar19 = "invalid distances set";
          }
          else {
            pcVar19 = "invalid literal/lengths set";
          }
          param_1[6] = (long)pcVar19;
          *(undefined4 *)(lVar36 + 8) = 0x3f51;
          goto code_r0x03fda2f0;
        }
        pcVar19 = "invalid code -- missing end-of-block";
        break;
      case 0x3f47:
code_r0x03fd9d8c:
        *(undefined4 *)(lVar36 + 8) = 0x3f48;
        pbVar24 = pbVar32;
      case 0x3f48:
        uVar34 = (uint)uVar35;
        uVar13 = (uint)uVar14;
        if ((5 < uVar34) && (0x101 < uVar38)) {
          param_1[3] = (long)__dest;
          *(uint *)(param_1 + 4) = uVar38;
          *param_1 = (long)pbVar24;
          *(uint *)(param_1 + 1) = uVar34;
          *(ulong *)(lVar36 + 0x50) = uVar33;
          *(uint *)(lVar36 + 0x58) = uVar13;
          func_0x03fdf108(param_1,uVar37);
          __dest = (undefined1 *)param_1[3];
          uVar38 = *(uint *)(param_1 + 4);
          pbVar32 = (byte *)*param_1;
          uVar35 = (ulong)*(uint *)(param_1 + 1);
          uVar33 = *(ulong *)(lVar36 + 0x50);
          uVar14 = (ulong)*(uint *)(lVar36 + 0x58);
          if (*(int *)(lVar36 + 8) == 0x3f3f) {
            *(undefined4 *)(lVar36 + 0x1bec) = 0xffffffff;
          }
          goto code_r0x03fda2f0;
        }
        *(undefined4 *)(lVar36 + 0x1bec) = 0;
        uVar15 = -1 << (ulong)(*(uint *)(lVar36 + 0x78) & 0x1f);
        lVar22 = *(long *)(lVar36 + 0x68);
        pbVar30 = (byte *)(lVar22 + (ulong)((uint)uVar33 & (uVar15 ^ 0xffffffff)) * 4);
        uVar12 = (ulong)pbVar30[1];
        pbVar32 = pbVar24;
        if (uVar13 < pbVar30[1]) {
          lVar25 = 0;
          uVar35 = uVar35 & 0xffffffff;
          pbVar11 = pbVar24;
          do {
            if ((int)uVar35 == 0) goto code_r0x03fda32c;
            pbVar32 = pbVar11 + 1;
            uVar12 = uVar14 + lVar25;
            lVar25 = lVar25 + 8;
            uVar35 = (ulong)((int)uVar35 - 1);
            uVar33 = ((ulong)*pbVar11 << (uVar12 & 0x3f)) + uVar33;
            pbVar30 = (byte *)(lVar22 + (ulong)(~uVar15 & (uint)uVar33) * 4);
            uVar12 = (ulong)pbVar30[1];
            pbVar11 = pbVar32;
          } while (uVar14 + lVar25 < uVar12);
          uVar14 = (ulong)(uVar13 + (int)lVar25);
        }
        uVar34 = (uint)uVar35;
        uVar15 = (uint)uVar12;
        uVar13 = (uint)uVar14;
        bVar4 = *pbVar30;
        uVar6 = *(ushort *)(pbVar30 + 2);
        if (bVar4 - 1 < 0xf) {
          uVar17 = -1 << (ulong)(uVar15 + bVar4 & 0x1f);
          pbVar24 = (byte *)(lVar22 + (ulong)((((uint)uVar33 & (uVar17 ^ 0xffffffff)) >>
                                              (ulong)(uVar15 & 0x1f)) + (uint)uVar6) * 4);
          bVar5 = pbVar24[1];
          pbVar30 = pbVar32;
          if (uVar13 < uVar15 + bVar5) {
            lVar25 = 0;
            uVar35 = uVar35 & 0xffffffff;
            pbVar11 = pbVar32;
            do {
              pbVar24 = pbVar32;
              if ((int)uVar35 == 0) goto code_r0x03fda32c;
              pbVar30 = pbVar11 + 1;
              uVar29 = uVar14 + lVar25;
              lVar25 = lVar25 + 8;
              uVar35 = (ulong)((int)uVar35 - 1);
              uVar33 = ((ulong)*pbVar11 << (uVar29 & 0x3f)) + uVar33;
              pbVar24 = (byte *)(lVar22 + (ulong)((((uint)uVar33 & ~uVar17) >>
                                                  (ulong)(uVar15 & 0x1f)) + (uint)uVar6) * 4);
              bVar5 = pbVar24[1];
              pbVar11 = pbVar30;
            } while (uVar14 + lVar25 < (ulong)(uVar15 + bVar5));
            uVar13 = uVar13 + (int)lVar25;
          }
          uVar6 = *(ushort *)(pbVar24 + 2);
          bVar4 = *pbVar24;
          uVar33 = uVar33 >> (uVar12 & 0x3f);
          uVar13 = uVar13 - uVar15;
          *(uint *)(lVar36 + 0x1bec) = uVar15;
          uVar12 = (ulong)bVar5;
          pbVar32 = pbVar30;
        }
        else {
          uVar15 = 0;
        }
        uVar33 = uVar33 >> (uVar12 & 0x3f);
        uVar14 = (ulong)(uVar13 - (int)uVar12);
        *(uint *)(lVar36 + 0x1bec) = uVar15 + (int)uVar12;
        *(uint *)(lVar36 + 0x5c) = (uint)uVar6;
        if (bVar4 == 0) {
          uVar18 = 0x3f4d;
          goto code_r0x03fda2ec;
        }
        if ((bVar4 >> 5 & 1) != 0) {
          uVar18 = 0x3f3f;
          *(undefined4 *)(lVar36 + 0x1bec) = 0xffffffff;
code_r0x03fd8df8:
          *(undefined4 *)(lVar36 + 8) = uVar18;
          goto code_r0x03fda2f0;
        }
        if ((bVar4 >> 6 & 1) == 0) {
          uVar15 = bVar4 & 0xf;
          *(uint *)(lVar36 + 100) = uVar15;
          *(undefined4 *)(lVar36 + 8) = 0x3f49;
          if ((bVar4 & 0xf) == 0) {
code_r0x03fd9f80:
            iVar9 = *(int *)(lVar36 + 0x5c);
          }
          else {
code_r0x03fd8e08:
            uVar34 = (uint)uVar35;
            uVar13 = (uint)uVar14;
            if (uVar13 < uVar15) {
              uVar35 = uVar35 & 0xffffffff;
              pbVar30 = pbVar32;
              do {
                pbVar24 = pbVar32;
                if ((int)uVar35 == 0) goto code_r0x03fda32c;
                pbVar24 = pbVar30 + 1;
                uVar35 = (ulong)((int)uVar35 - 1);
                uVar12 = uVar14 & 0x3f;
                uVar17 = (int)uVar14 + 8;
                uVar14 = (ulong)uVar17;
                uVar33 = ((ulong)*pbVar30 << uVar12) + uVar33;
                pbVar30 = pbVar24;
              } while (uVar17 < uVar15);
            }
            else {
              uVar35 = uVar35 & 0xffffffff;
              pbVar24 = pbVar32;
              uVar17 = uVar13;
            }
            uVar14 = (ulong)(uVar17 - uVar15);
            uVar13 = (uint)uVar33;
            uVar33 = uVar33 >> ((ulong)uVar15 & 0x3f);
            iVar9 = *(int *)(lVar36 + 0x5c) +
                    (uVar13 & (-1 << (ulong)(uVar15 & 0x1f) ^ 0xffffffffU));
            *(int *)(lVar36 + 0x5c) = iVar9;
            *(uint *)(lVar36 + 0x1bec) = *(int *)(lVar36 + 0x1bec) + uVar15;
            pbVar32 = pbVar24;
          }
          *(int *)(lVar36 + 0x1bf0) = iVar9;
          *(undefined4 *)(lVar36 + 8) = 0x3f4a;
          pbVar24 = pbVar32;
code_r0x03fd9f90:
          uVar34 = (uint)uVar35;
          uVar15 = -1 << (ulong)(*(uint *)(lVar36 + 0x7c) & 0x1f);
          lVar22 = *(long *)(lVar36 + 0x70);
          pbVar30 = (byte *)(lVar22 + (ulong)((uint)uVar33 & (uVar15 ^ 0xffffffff)) * 4);
          uVar12 = (ulong)pbVar30[1];
          uVar13 = (uint)uVar14;
          pbVar32 = pbVar24;
          if (uVar13 < pbVar30[1]) {
            lVar25 = 0;
            uVar35 = uVar35 & 0xffffffff;
            pbVar11 = pbVar24;
            do {
              if ((int)uVar35 == 0) goto code_r0x03fda32c;
              pbVar32 = pbVar11 + 1;
              uVar12 = uVar14 + lVar25;
              lVar25 = lVar25 + 8;
              uVar35 = (ulong)((int)uVar35 - 1);
              uVar33 = ((ulong)*pbVar11 << (uVar12 & 0x3f)) + uVar33;
              pbVar30 = (byte *)(lVar22 + (ulong)(~uVar15 & (uint)uVar33) * 4);
              uVar12 = (ulong)pbVar30[1];
              pbVar11 = pbVar32;
            } while (uVar14 + lVar25 < uVar12);
            uVar14 = (ulong)(uVar13 + (int)lVar25);
          }
          uVar34 = (uint)uVar35;
          uVar13 = (uint)uVar14;
          bVar4 = *pbVar30;
          uVar6 = *(ushort *)(pbVar30 + 2);
          if (bVar4 < 0x10) {
            uVar17 = (uint)uVar12;
            uVar15 = -1 << (ulong)(uVar17 + bVar4 & 0x1f);
            pbVar24 = (byte *)(lVar22 + (ulong)((((uint)uVar33 & (uVar15 ^ 0xffffffff)) >>
                                                (ulong)(uVar17 & 0x1f)) + (uint)uVar6) * 4);
            bVar5 = pbVar24[1];
            pbVar30 = pbVar32;
            if (uVar13 < uVar17 + bVar5) {
              lVar25 = 0;
              uVar35 = uVar35 & 0xffffffff;
              pbVar11 = pbVar32;
              do {
                pbVar24 = pbVar32;
                if ((int)uVar35 == 0) goto code_r0x03fda32c;
                pbVar30 = pbVar11 + 1;
                uVar29 = uVar14 + lVar25;
                lVar25 = lVar25 + 8;
                uVar35 = (ulong)((int)uVar35 - 1);
                uVar33 = ((ulong)*pbVar11 << (uVar29 & 0x3f)) + uVar33;
                pbVar24 = (byte *)(lVar22 + (ulong)((((uint)uVar33 & ~uVar15) >>
                                                    (ulong)(uVar17 & 0x1f)) + (uint)uVar6) * 4);
                bVar5 = pbVar24[1];
                pbVar11 = pbVar30;
              } while (uVar14 + lVar25 < (ulong)(uVar17 + bVar5));
              uVar13 = uVar13 + (int)lVar25;
            }
            uVar6 = *(ushort *)(pbVar24 + 2);
            uVar33 = uVar33 >> (uVar12 & 0x3f);
            bVar4 = *pbVar24;
            uVar13 = uVar13 - uVar17;
            iVar9 = *(int *)(lVar36 + 0x1bec) + uVar17;
            *(int *)(lVar36 + 0x1bec) = iVar9;
            uVar12 = (ulong)bVar5;
            pbVar32 = pbVar30;
          }
          else {
            iVar9 = *(int *)(lVar36 + 0x1bec);
          }
          uVar33 = uVar33 >> (uVar12 & 0x3f);
          uVar14 = (ulong)(uVar13 - (int)uVar12);
          *(int *)(lVar36 + 0x1bec) = iVar9 + (int)uVar12;
          if ((bVar4 >> 6 & 1) != 0) {
            pcVar19 = "invalid distance code";
            break;
          }
          uVar15 = bVar4 & 0xf;
          *(uint *)(lVar36 + 0x60) = (uint)uVar6;
          *(uint *)(lVar36 + 100) = uVar15;
          *(undefined4 *)(lVar36 + 8) = 0x3f4b;
          if ((bVar4 & 0xf) != 0) {
code_r0x03fda0f4:
            uVar34 = (uint)uVar35;
            uVar13 = (uint)uVar14;
            if (uVar13 < uVar15) {
              uVar35 = uVar35 & 0xffffffff;
              pbVar30 = pbVar32;
              do {
                pbVar24 = pbVar32;
                if ((int)uVar35 == 0) goto code_r0x03fda32c;
                pbVar24 = pbVar30 + 1;
                uVar35 = (ulong)((int)uVar35 - 1);
                uVar12 = uVar14 & 0x3f;
                uVar17 = (int)uVar14 + 8;
                uVar14 = (ulong)uVar17;
                uVar33 = ((ulong)*pbVar30 << uVar12) + uVar33;
                pbVar30 = pbVar24;
              } while (uVar17 < uVar15);
            }
            else {
              uVar35 = uVar35 & 0xffffffff;
              pbVar24 = pbVar32;
              uVar17 = uVar13;
            }
            uVar14 = (ulong)(uVar17 - uVar15);
            uVar13 = (uint)uVar33;
            uVar33 = uVar33 >> ((ulong)uVar15 & 0x3f);
            *(uint *)(lVar36 + 0x60) =
                 *(int *)(lVar36 + 0x60) + (uVar13 & (-1 << (ulong)(uVar15 & 0x1f) ^ 0xffffffffU));
            *(uint *)(lVar36 + 0x1bec) = *(int *)(lVar36 + 0x1bec) + uVar15;
            pbVar32 = pbVar24;
          }
code_r0x03fda178:
          *(undefined4 *)(lVar36 + 8) = 0x3f4c;
code_r0x03fda180:
          uVar13 = (uint)uVar14;
          uVar15 = (uint)uVar35;
          pbVar24 = pbVar32;
          iVar26 = iStack_74;
          if (uVar38 != 0) {
            uVar13 = *(uint *)(lVar36 + 0x60);
            if (uVar37 - uVar38 < uVar13) {
              uVar13 = uVar13 - (uVar37 - uVar38);
              if ((*(uint *)(lVar36 + 0x40) < uVar13) && (*(int *)(lVar36 + 0x1be8) != 0)) {
                pcVar19 = "invalid distance too far back";
                break;
              }
              uVar17 = *(uint *)(lVar36 + 0x44);
              uVar15 = uVar13 - uVar17;
              if (uVar13 < uVar17 || uVar15 == 0) {
                uVar17 = uVar17 - uVar13;
              }
              else {
                uVar17 = *(int *)(lVar36 + 0x3c) - uVar15;
                uVar13 = uVar15;
              }
              uVar15 = *(uint *)(lVar36 + 0x5c);
              puVar20 = (undefined1 *)(*(long *)(lVar36 + 0x48) + (ulong)uVar17);
              if (uVar15 <= uVar13) {
                uVar13 = uVar15;
              }
            }
            else {
              uVar15 = *(uint *)(lVar36 + 0x5c);
              puVar20 = __dest + -(ulong)uVar13;
              uVar13 = uVar15;
            }
            if (uVar38 <= uVar13) {
              uVar13 = uVar38;
            }
            *(uint *)(lVar36 + 0x5c) = uVar15 - uVar13;
            puVar31 = __dest;
            uVar15 = uVar13;
            do {
              uVar15 = uVar15 - 1;
              __dest = puVar31 + 1;
              *puVar31 = *puVar20;
              puVar20 = puVar20 + 1;
              puVar31 = __dest;
            } while (uVar15 != 0);
            uVar38 = uVar38 - uVar13;
            if (*(int *)(lVar36 + 0x5c) == 0) {
              uVar18 = 0x3f48;
              goto code_r0x03fda2ec;
            }
            goto code_r0x03fda2f0;
          }
          goto code_r0x03fda3cc;
        }
        pcVar19 = "invalid literal/length code";
        break;
      case 0x3f49:
        uVar15 = *(uint *)(lVar36 + 100);
        if (uVar15 != 0) goto code_r0x03fd8e08;
        goto code_r0x03fd9f80;
      case 0x3f4a:
        goto code_r0x03fd9f90;
      case 0x3f4b:
        uVar15 = *(uint *)(lVar36 + 100);
        if (uVar15 != 0) goto code_r0x03fda0f4;
        goto code_r0x03fda178;
      case 0x3f4c:
        goto code_r0x03fda180;
      case 0x3f4d:
        iVar26 = iStack_74;
        if (uVar38 != 0) {
          uVar18 = 0x3f48;
          uVar38 = uVar38 - 1;
          *__dest = (char)*(undefined4 *)(lVar36 + 0x5c);
          __dest = __dest + 1;
          goto code_r0x03fd8df8;
        }
        goto code_r0x03fda3cc;
      case 0x3f4e:
        uVar17 = *(uint *)(lVar36 + 0x10);
        if (uVar17 != 0) {
          if (uVar13 < 0x20) {
            lVar22 = 0;
            do {
              if ((int)uVar35 == 0) goto code_r0x03fda340;
              pbVar32 = pbVar24 + 1;
              uVar12 = uVar14 + lVar22;
              lVar22 = lVar22 + 8;
              uVar35 = (ulong)((int)uVar35 - 1);
              uVar33 = ((ulong)*pbVar24 << (uVar12 & 0x3f)) + uVar33;
              pbVar24 = pbVar32;
            } while ((uVar14 + lVar22) - 8 < 0x18);
            uVar14 = (ulong)(uVar13 + (int)lVar22);
          }
          uVar12 = (ulong)(uVar37 - uVar38);
          lVar22 = *(long *)(lVar36 + 0x28);
          param_1[5] = param_1[5] + uVar12;
          uVar13 = uVar17 & 4;
          *(ulong *)(lVar36 + 0x28) = lVar22 + uVar12;
          if (((uVar17 >> 2 & 1) != 0) && (uVar37 != uVar38)) {
            if (*(int *)(lVar36 + 0x18) == 0) {
              lVar22 = FUN_03fdad2c(*(undefined8 *)(lVar36 + 0x20),(long)__dest - uVar12);
            }
            else {
              lVar22 = FUN_03fda9f8();
            }
            uVar17 = *(uint *)(lVar36 + 0x10);
            uVar13 = uVar17 & 4;
            *(long *)(lVar36 + 0x20) = lVar22;
            param_1[0xc] = lVar22;
          }
          uVar37 = uVar38;
          if (uVar13 != 0) {
            uVar13 = ((uint)uVar33 & 0xff00ff00) >> 8 | ((uint)uVar33 & 0xff00ff) << 8;
            uVar12 = (ulong)(uVar13 >> 0x10 | uVar13 << 0x10);
            if (*(int *)(lVar36 + 0x18) != 0) {
              uVar12 = uVar33;
            }
            if (uVar12 != *(ulong *)(lVar36 + 0x20)) {
              pcVar19 = "incorrect data check";
              break;
            }
          }
          uVar33 = 0;
          uVar14 = 0;
        }
        *(undefined4 *)(lVar36 + 8) = 0x3f4f;
        goto code_r0x03fd9cec;
      case 0x3f4f:
        uVar17 = *(uint *)(lVar36 + 0x10);
code_r0x03fd9cec:
        uVar13 = (uint)uVar14;
        uVar15 = (uint)uVar35;
        if ((uVar17 != 0) && (*(int *)(lVar36 + 0x18) != 0)) {
          if (uVar13 < 0x20) {
            lVar22 = 0;
            pbVar24 = pbVar32;
            do {
              if ((int)uVar35 == 0) goto code_r0x03fda340;
              pbVar32 = pbVar24 + 1;
              uVar12 = uVar14 + lVar22;
              lVar22 = lVar22 + 8;
              uVar35 = (ulong)((int)uVar35 - 1);
              uVar33 = ((ulong)*pbVar24 << (uVar12 & 0x3f)) + uVar33;
              pbVar24 = pbVar32;
            } while ((uVar14 + lVar22) - 8 < 0x18);
            uVar14 = (ulong)(uVar13 + (int)lVar22);
          }
          uVar15 = (uint)uVar35;
          if (((uVar17 >> 2 & 1) != 0) && (uVar33 != *(uint *)(lVar36 + 0x28))) {
            pcVar19 = "incorrect length check";
            break;
          }
          uVar33 = 0;
          uVar13 = 0;
        }
        *(undefined4 *)(lVar36 + 8) = 0x3f50;
      case 0x3f50:
        pbVar24 = pbVar32;
        iVar26 = 1;
code_r0x03fda3cc:
        iVar9 = *(int *)(lVar36 + 0x3c);
        param_1[3] = (long)__dest;
        *(uint *)(param_1 + 4) = uVar38;
        *param_1 = (long)pbVar24;
        *(uint *)(param_1 + 1) = uVar15;
        *(ulong *)(lVar36 + 0x50) = uVar33;
        *(uint *)(lVar36 + 0x58) = uVar13;
        if ((iVar9 != 0) ||
           (((uVar37 != uVar38 && (*(uint *)(lVar36 + 8) < 0x3f51)) &&
            ((param_2 != 4 || (*(uint *)(lVar36 + 8) < 0x3f4e)))))) {
          iVar9 = func_0x03fda538(param_1,__dest,uVar37 - uVar38);
          if (iVar9 != 0) {
            *(undefined4 *)(lVar36 + 8) = 0x3f52;
code_r0x03fd8c8c:
            return -4;
          }
          uVar15 = *(uint *)(param_1 + 1);
          uVar38 = *(uint *)(param_1 + 4);
        }
        uVar14 = (ulong)(uVar37 - uVar38);
        param_1[2] = param_1[2] + (ulong)(uVar3 - uVar15);
        lVar21 = *(long *)(lVar36 + 0x28);
        param_1[5] = param_1[5] + uVar14;
        *(ulong *)(lVar36 + 0x28) = lVar21 + uVar14;
        if (((*(byte *)(lVar36 + 0x10) >> 2 & 1) != 0) && (uVar37 != uVar38)) {
          if (*(int *)(lVar36 + 0x18) == 0) {
            lVar21 = FUN_03fdad2c(*(undefined8 *)(lVar36 + 0x20),param_1[3] - uVar14);
          }
          else {
            lVar21 = FUN_03fda9f8();
          }
          *(long *)(lVar36 + 0x20) = lVar21;
          param_1[0xc] = lVar21;
        }
        iVar27 = *(int *)(lVar36 + 8);
        iVar9 = 0x100;
        if (iVar27 != 0x3f42 && iVar27 != 0x3f47) {
          iVar9 = 0;
        }
        *(uint *)(param_1 + 0xb) =
             *(int *)(lVar36 + 0x58) + (uint)(*(int *)(lVar36 + 0xc) != 0) * 0x40 +
             (uint)(iVar27 == 0x3f3f) * 0x80 + iVar9;
        if ((uVar37 == uVar38 && uVar3 == uVar15 || param_2 == 4) && iVar26 == 0) {
          return -5;
        }
        return iVar26;
      case 0x3f51:
        goto code_r0x03fda3cc;
      case 0x3f52:
        goto code_r0x03fd8c8c;
      default:
        goto code_r0x03fd8c8c;
      }
code_r0x03fda2e4:
      param_1[6] = (long)pcVar19;
      uVar18 = 0x3f51;
code_r0x03fda2ec:
      *(undefined4 *)(lVar36 + 8) = uVar18;
code_r0x03fda2f0:
      iVar9 = *(int *)(lVar36 + 8);
    } while( true );
  }
code_r0x03fd8c8c:
  return -2;
code_r0x03fda398:
  uVar15 = 0;
  uVar13 = uVar13 + (int)lVar25;
  iVar26 = iStack_74;
  goto code_r0x03fda3cc;
code_r0x03fda32c:
  uVar13 = uVar13 + uVar34 * 8;
  uVar15 = 0;
  pbVar24 = pbVar24 + uVar34;
  iVar26 = iStack_74;
  goto code_r0x03fda3cc;
code_r0x03fda34c:
  uVar15 = 0;
  uVar13 = (uint)uVar14;
  pbVar24 = pbVar32;
  iVar26 = iStack_74;
  goto code_r0x03fda3cc;
code_r0x03fda364:
  uVar15 = 0;
  uVar13 = (uint)uVar14;
  iVar26 = iStack_74;
  goto code_r0x03fda3cc;
code_r0x03fda340:
  uVar15 = 0;
  uVar13 = uVar13 + (int)lVar22;
  iVar26 = iStack_74;
  goto code_r0x03fda3cc;
}


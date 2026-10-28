// rea decompile_all
// name: FUN_03fddcf4
// address: 0x3fddcf4
// body: available
// range: 0x3fddcf4-0x3fde22b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fde1f8 to 0x3fddb24 FUN_03fddb24 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fddcf4(long *param_1,long param_2,long param_3,int param_4)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  ulong uVar5;
  undefined *puVar6;
  long *plVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  undefined4 uVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  byte *pbVar16;
  
  if (*(int *)((long)param_1 + 0xc4) < 1) {
    uVar10 = 0;
    uVar15 = param_3 + 5;
    uVar5 = uVar15;
  }
  else {
    if (*(int *)(*param_1 + 0x58) == 2) {
      lVar13 = 0;
      uVar15 = 0xf3ffc07f;
      do {
        if (((uVar15 & 1) != 0) && (*(short *)((long)param_1 + lVar13 + 0xd4) != 0)) {
          uVar11 = 0;
          goto LAB_03fddd88;
        }
        lVar13 = lVar13 + 4;
        uVar15 = uVar15 >> 1;
      } while (lVar13 != 0x80);
      if ((((short)param_1[0x1f] == 0) && (*(short *)((long)param_1 + 0xfc) == 0)) &&
         ((short)param_1[0x21] == 0)) {
        lVar13 = 0;
        do {
          if (*(short *)((long)param_1 + lVar13 + 0x154) != 0) goto LAB_03fddd70;
          lVar13 = lVar13 + 4;
        } while (lVar13 != 0x380);
        uVar11 = 0;
      }
      else {
LAB_03fddd70:
        uVar11 = 1;
      }
LAB_03fddd88:
      *(undefined4 *)(*param_1 + 0x58) = uVar11;
    }
    FUN_03fde22c(param_1,param_1 + 0x16b);
    FUN_03fde22c(param_1,param_1 + 0x16e);
    FUN_03fdeb4c(param_1,(long)param_1 + 0xd4,(int)param_1[0x16c]);
    FUN_03fdeb4c(param_1,param_1 + 0x139,(int)param_1[0x16f]);
    FUN_03fde22c(param_1,param_1 + 0x171);
    uVar10 = 0x12;
    do {
      if (*(short *)((long)param_1 + (ulong)(byte)(&UNK_023af3a8)[uVar10] * 4 + 0xabe) != 0)
      goto LAB_03fdddfc;
      uVar8 = (uint)uVar10;
      uVar10 = (ulong)(uVar8 - 1);
    } while (3 < uVar8);
    uVar10 = 2;
LAB_03fdddfc:
    lVar13 = param_1[0x2e3] +
             (-(uVar10 >> 0x1f) & 0xfffffffe00000000 | uVar10 << 1) + (long)(int)uVar10;
    uVar15 = param_1[0x2e4] + 10U >> 3;
    uVar1 = lVar13 + 0x1b;
    param_1[0x2e3] = lVar13 + 0x11;
    uVar5 = uVar15;
    if ((uVar1 >> 3 < uVar15) && ((int)param_1[0x19] != 4)) {
      uVar5 = uVar1 >> 3;
    }
  }
  uVar8 = (uint)uVar10;
  if ((param_2 == 0) || (uVar5 < param_3 + 4U)) {
    uVar14 = *(uint *)((long)param_1 + 0x1734);
    if (uVar15 == uVar5) {
      uVar8 = param_4 + 2;
      if ((int)uVar14 < 0xe) {
        *(ushort *)(param_1 + 0x2e6) =
             *(ushort *)(param_1 + 0x2e6) | (ushort)(uVar8 << (ulong)(uVar14 & 0x1f));
        iVar9 = uVar14 + 3;
      }
      else {
        lVar13 = param_1[5];
        uVar14 = (uint)*(ushort *)(param_1 + 0x2e6) | uVar8 << (ulong)(uVar14 & 0x1f);
        *(short *)(param_1 + 0x2e6) = (short)uVar14;
        param_1[5] = lVar13 + 1;
        *(char *)(param_1[2] + lVar13) = (char)uVar14;
        lVar13 = param_1[5];
        param_1[5] = lVar13 + 1;
        *(undefined1 *)(param_1[2] + lVar13) = *(undefined1 *)((long)param_1 + 0x1731);
        *(short *)(param_1 + 0x2e6) =
             (short)((uVar8 & 0xffff) >> (ulong)(0x10U - *(int *)((long)param_1 + 0x1734) & 0x1f));
        iVar9 = *(int *)((long)param_1 + 0x1734) + -0xd;
      }
      *(int *)((long)param_1 + 0x1734) = iVar9;
      puVar6 = &UNK_023aed78;
      plVar7 = (long *)&DAT_023af1f8;
    }
    else {
      uVar12 = param_4 + 4;
      if ((int)uVar14 < 0xe) {
        uVar12 = (uint)*(ushort *)(param_1 + 0x2e6) | uVar12 << (ulong)(uVar14 & 0x1f);
        uVar14 = uVar14 + 3;
      }
      else {
        lVar13 = param_1[5];
        uVar14 = (uint)*(ushort *)(param_1 + 0x2e6) | uVar12 << (ulong)(uVar14 & 0x1f);
        *(short *)(param_1 + 0x2e6) = (short)uVar14;
        param_1[5] = lVar13 + 1;
        *(char *)(param_1[2] + lVar13) = (char)uVar14;
        lVar13 = param_1[5];
        param_1[5] = lVar13 + 1;
        *(undefined1 *)(param_1[2] + lVar13) = *(undefined1 *)((long)param_1 + 0x1731);
        uVar12 = (uVar12 & 0xffff) >> (ulong)(0x10U - *(int *)((long)param_1 + 0x1734) & 0x1f);
        uVar14 = *(int *)((long)param_1 + 0x1734) - 0xd;
      }
      *(short *)(param_1 + 0x2e6) = (short)uVar12;
      uVar3 = *(uint *)(param_1 + 0x16f);
      *(uint *)((long)param_1 + 0x1734) = uVar14;
      uVar2 = (int)param_1[0x16c] + 0xff00;
      if ((int)uVar14 < 0xc) {
        uVar12 = uVar12 | uVar2 << (ulong)(uVar14 & 0x1f);
        uVar14 = uVar14 + 5;
      }
      else {
        lVar13 = param_1[5];
        uVar12 = uVar12 | uVar2 << (ulong)(uVar14 & 0x1f);
        *(short *)(param_1 + 0x2e6) = (short)uVar12;
        param_1[5] = lVar13 + 1;
        *(char *)(param_1[2] + lVar13) = (char)uVar12;
        lVar13 = param_1[5];
        param_1[5] = lVar13 + 1;
        *(undefined1 *)(param_1[2] + lVar13) = *(undefined1 *)((long)param_1 + 0x1731);
        uVar12 = (uVar2 & 0xffff) >> (ulong)(0x10U - *(int *)((long)param_1 + 0x1734) & 0x1f);
        uVar14 = *(int *)((long)param_1 + 0x1734) - 0xb;
      }
      *(short *)(param_1 + 0x2e6) = (short)uVar12;
      *(uint *)((long)param_1 + 0x1734) = uVar14;
      if ((int)uVar14 < 0xc) {
        uVar12 = uVar12 | uVar3 << (ulong)(uVar14 & 0x1f);
        uVar14 = uVar14 + 5;
      }
      else {
        lVar13 = param_1[5];
        uVar12 = uVar12 | uVar3 << (ulong)(uVar14 & 0x1f);
        *(short *)(param_1 + 0x2e6) = (short)uVar12;
        param_1[5] = lVar13 + 1;
        *(char *)(param_1[2] + lVar13) = (char)uVar12;
        lVar13 = param_1[5];
        param_1[5] = lVar13 + 1;
        *(undefined1 *)(param_1[2] + lVar13) = *(undefined1 *)((long)param_1 + 0x1731);
        uVar12 = (uVar3 & 0xffff) >> (ulong)(0x10U - *(int *)((long)param_1 + 0x1734) & 0x1f);
        uVar14 = *(int *)((long)param_1 + 0x1734) - 0xb;
      }
      *(short *)(param_1 + 0x2e6) = (short)uVar12;
      *(uint *)((long)param_1 + 0x1734) = uVar14;
      uVar2 = uVar8 + 0xfffd;
      if ((int)uVar14 < 0xd) {
        uVar12 = uVar12 | uVar2 << (ulong)(uVar14 & 0x1f);
        uVar14 = uVar14 + 4;
      }
      else {
        lVar13 = param_1[5];
        uVar12 = uVar12 | uVar2 << (ulong)(uVar14 & 0x1f);
        *(short *)(param_1 + 0x2e6) = (short)uVar12;
        param_1[5] = lVar13 + 1;
        *(char *)(param_1[2] + lVar13) = (char)uVar12;
        lVar13 = param_1[5];
        param_1[5] = lVar13 + 1;
        *(undefined1 *)(param_1[2] + lVar13) = *(undefined1 *)((long)param_1 + 0x1731);
        uVar12 = (uVar2 & 0xffff) >> (ulong)(0x10U - *(int *)((long)param_1 + 0x1734) & 0x1f);
        uVar14 = *(int *)((long)param_1 + 0x1734) - 0xc;
      }
      *(short *)(param_1 + 0x2e6) = (short)uVar12;
      *(uint *)((long)param_1 + 0x1734) = uVar14;
      if (uVar8 < 0x7fffffff) {
        uVar15 = (ulong)(uVar8 + 1);
        pbVar16 = &UNK_023af3a8;
        do {
          uVar4 = *(ushort *)((long)param_1 + (ulong)*pbVar16 * 4 + 0xabe);
          uVar12 = uVar12 | (uint)uVar4 << (ulong)(uVar14 & 0x1f);
          *(short *)(param_1 + 0x2e6) = (short)uVar12;
          if ((int)uVar14 < 0xe) {
            uVar14 = uVar14 + 3;
          }
          else {
            lVar13 = param_1[5];
            param_1[5] = lVar13 + 1;
            *(char *)(param_1[2] + lVar13) = (char)uVar12;
            lVar13 = param_1[5];
            param_1[5] = lVar13 + 1;
            *(undefined1 *)(param_1[2] + lVar13) = *(undefined1 *)((long)param_1 + 0x1731);
            uVar14 = *(int *)((long)param_1 + 0x1734) - 0xd;
            uVar4 = uVar4 >> (ulong)(0x10U - *(int *)((long)param_1 + 0x1734) & 0x1f);
            uVar12 = (uint)uVar4;
            *(ushort *)(param_1 + 0x2e6) = uVar4;
          }
          uVar15 = uVar15 - 1;
          *(uint *)((long)param_1 + 0x1734) = uVar14;
          pbVar16 = pbVar16 + 1;
        } while (uVar15 != 0);
      }
      FUN_03fdec58(param_1,(long)param_1 + 0xd4);
      FUN_03fdec58(param_1,param_1 + 0x139,uVar3);
      puVar6 = (undefined *)((long)param_1 + 0xd4);
      plVar7 = param_1 + 0x139;
    }
    FUN_03fde698(param_1,puVar6,plVar7);
  }
  else {
    FUN_03fdd9f4(param_1,param_2,param_3,param_4);
  }
  FUN_03fdd660(param_1);
  if (param_4 != 0) {
    FUN_03fddb24(param_1);
    return;
  }
  return;
}


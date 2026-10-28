// rea decompile_all
// name: FUN_03fdf58c
// address: 0x3fdf58c
// body: available
// range: 0x3fdf58c-0x3fdf97b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_03fdf58c(int param_1,ushort *param_2,uint param_3,long *param_4,uint *param_5,undefined *param_6
            )

{
  undefined1 *puVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  undefined1 uVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  undefined4 *puVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  ushort *puVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  bool bVar23;
  short sVar24;
  uint uVar25;
  long lVar26;
  undefined *puVar27;
  undefined *puVar28;
  uint uVar29;
  ushort uVar30;
  undefined1 uVar31;
  uint uVar32;
  ushort auStack_a0 [16];
  ushort local_80 [16];
  
  local_80[4] = 0;
  local_80[5] = 0;
  local_80[6] = 0;
  local_80[7] = 0;
  local_80[0] = 0;
  local_80[1] = 0;
  local_80[2] = 0;
  local_80[3] = 0;
  local_80[0xc] = 0;
  local_80[0xd] = 0;
  local_80[0xe] = 0;
  local_80[0xf] = 0;
  local_80[8] = 0;
  local_80[9] = 0;
  local_80[10] = 0;
  local_80[0xb] = 0;
  if (param_3 != 0) {
    uVar14 = (ulong)param_3;
    puVar19 = param_2;
    do {
      uVar14 = uVar14 - 1;
      local_80[*puVar19] = local_80[*puVar19] + 1;
      puVar19 = puVar19 + 1;
    } while (uVar14 != 0);
  }
  uVar14 = 0xf;
  while (uVar17 = (uint)uVar14, local_80[uVar14] == 0) {
    uVar14 = (ulong)(uVar17 - 1);
    if (uVar17 - 1 == 0) {
      puVar15 = (undefined4 *)*param_4;
      *param_4 = (long)(puVar15 + 1);
      *puVar15 = 0x140;
      puVar15 = (undefined4 *)*param_4;
      *param_4 = (long)(puVar15 + 1);
      *puVar15 = 0x140;
      uVar18 = 1;
LAB_03fdf61c:
      *param_5 = uVar18;
      return 0;
    }
  }
  uVar18 = *param_5;
  if (uVar17 <= *param_5) {
    uVar18 = uVar17;
  }
  if (uVar17 < 2) {
    uVar22 = 1;
  }
  else {
    uVar21 = 1;
    do {
      uVar22 = uVar21;
      if (local_80[uVar21] != 0) break;
      uVar21 = uVar21 + 1;
      uVar22 = uVar14;
    } while (uVar14 != uVar21);
  }
  lVar26 = 2;
  if (uVar18 <= (uint)uVar22) {
    uVar18 = (uint)uVar22;
  }
  iVar12 = 1;
  do {
    iVar12 = iVar12 * 2 - (uint)*(ushort *)((long)local_80 + lVar26);
    if (iVar12 < 0) {
      return 0xffffffff;
    }
    lVar26 = lVar26 + 2;
  } while (lVar26 != 0x20);
  if ((iVar12 != 0) && ((param_1 == 0 || (uVar17 != 1)))) {
    return 0xffffffff;
  }
  lVar26 = 0;
  sVar24 = 0;
  auStack_a0[1] = 0;
  do {
    sVar24 = *(short *)(((ulong)local_80 | 2) + lVar26) + sVar24;
    *(short *)((long)auStack_a0 + lVar26 + 4) = sVar24;
    lVar26 = lVar26 + 2;
  } while (lVar26 != 0x1c);
  if (param_3 != 0) {
    uVar14 = 0;
    do {
      uVar21 = (ulong)param_2[uVar14];
      if (uVar21 != 0) {
        uVar30 = auStack_a0[uVar21];
        auStack_a0[uVar21] = uVar30 + 1;
        *(short *)(param_6 + (ulong)uVar30 * 2) = (short)uVar14;
      }
      uVar14 = uVar14 + 1;
    } while (param_3 != uVar14);
  }
  if (param_1 == 0) {
    bVar8 = false;
    bVar23 = false;
    uVar25 = 0x14;
    puVar27 = param_6;
    puVar28 = param_6;
  }
  else if (param_1 == 1) {
    if (9 < uVar18) {
      return 1;
    }
    bVar8 = false;
    uVar25 = 0x101;
    bVar23 = true;
    puVar27 = &UNK_023af4e6;
    puVar28 = &UNK_023af4a8;
  }
  else {
    bVar8 = param_1 == 2;
    uVar25 = 0;
    puVar27 = &UNK_023af564;
    puVar28 = &UNK_023af524;
    if (bVar8) {
      bVar23 = false;
      if (9 < uVar18) {
        return 1;
      }
    }
    else {
      bVar23 = false;
    }
  }
  lVar26 = *param_4;
  uVar9 = 0;
  uVar29 = 1 << (ulong)(uVar18 & 0x1f);
  uVar11 = 0;
  uVar7 = uVar29 - 1;
  uVar10 = 0;
  uVar13 = 0xffffffff;
  uVar2 = uVar18;
  do {
    uVar5 = 1 << (ulong)(uVar2 & 0x1f);
    do {
      uVar30 = *(ushort *)(param_6 + (ulong)uVar9 * 2);
      if (uVar30 + 1 < uVar25) {
        uVar31 = 0;
      }
      else if (uVar30 < uVar25) {
        uVar30 = 0;
        uVar31 = 0x60;
      }
      else {
        uVar31 = puVar27[(ulong)(uVar30 - uVar25) * 2];
        uVar30 = *(ushort *)(puVar28 + (ulong)(uVar30 - uVar25) * 2);
      }
      uVar20 = (uint)uVar22;
      iVar12 = -1 << (ulong)(uVar20 - uVar10 & 0x1f);
      uVar2 = uVar5;
      do {
        uVar32 = (uVar11 >> (ulong)(uVar10 & 0x1f)) + iVar12 + uVar2;
        uVar2 = uVar2 + iVar12;
        puVar1 = (undefined1 *)(lVar26 + (ulong)uVar32 * 4);
        *puVar1 = uVar31;
        uVar6 = (undefined1)(uVar20 - uVar10);
        puVar1[1] = uVar6;
        *(ushort *)(puVar1 + 2) = uVar30;
      } while (uVar2 != 0);
      uVar2 = 1 << (ulong)(uVar20 - 1 & 0x1f);
      do {
        uVar32 = uVar2;
        uVar2 = uVar32 >> 1;
      } while ((uVar32 & uVar11) != 0);
      uVar30 = local_80[uVar22 & 0xffffffff];
      uVar2 = uVar32 - 1 & uVar11;
      uVar9 = uVar9 + 1;
      local_80[uVar22 & 0xffffffff] = uVar30 - 1;
      uVar11 = 0;
      if (uVar32 != 0) {
        uVar11 = uVar2 + uVar32;
      }
      if ((ushort)(uVar30 - 1) == 0) {
        if (uVar20 == uVar17) {
          if (uVar11 != 0) {
            puVar1 = (undefined1 *)(lVar26 + (ulong)uVar11 * 4);
            *puVar1 = 0x40;
            puVar1[1] = uVar6;
            *(undefined2 *)(puVar1 + 2) = 0;
          }
          *param_4 = *param_4 + (ulong)uVar29 * 4;
          goto LAB_03fdf61c;
        }
        uVar22 = (ulong)param_2[*(ushort *)(param_6 + (ulong)uVar9 * 2)];
      }
      uVar20 = (uint)uVar22;
    } while ((uVar20 <= uVar18) || (uVar32 = uVar11 & uVar7, uVar32 == uVar13));
    uVar13 = uVar18;
    if (uVar10 != 0) {
      uVar13 = uVar10;
    }
    uVar2 = uVar20 - uVar13;
    iVar12 = 1 << (ulong)(uVar2 & 0x1f);
    if (uVar20 < uVar17) {
      uVar2 = uVar17 - uVar13;
      uVar14 = uVar22 & 0xffffffff;
      do {
        puVar19 = local_80 + uVar14;
        if ((int)(iVar12 - (uint)*puVar19) < 1) {
          uVar2 = (int)uVar14 - uVar13;
          break;
        }
        uVar10 = (int)uVar14 + 1;
        uVar14 = (ulong)uVar10;
        iVar12 = (iVar12 - (uint)*puVar19) * 2;
      } while (uVar10 < uVar17);
      iVar12 = 1 << (ulong)(uVar2 & 0x1f);
    }
    uVar29 = iVar12 + uVar29;
    bVar3 = false;
    if (0x354 < uVar29) {
      bVar3 = bVar23;
    }
    bVar4 = false;
    if (0x250 < uVar29) {
      bVar4 = bVar8;
    }
    if (bVar3) {
      return 1;
    }
    if (bVar4) {
      return 1;
    }
    lVar16 = *param_4;
    lVar26 = lVar26 + (ulong)uVar5 * 4;
    puVar1 = (undefined1 *)(lVar16 + (ulong)uVar32 * 4);
    *puVar1 = (char)uVar2;
    puVar1[1] = (char)uVar18;
    *(short *)(puVar1 + 2) = (short)((uint)((int)lVar26 - (int)lVar16) >> 2);
    uVar10 = uVar13;
    uVar13 = uVar32;
  } while( true );
}


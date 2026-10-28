// rea decompile_all
// name: FUN_03fde698
// address: 0x3fde698
// body: available
// range: 0x3fde698-0x3fdea47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fde698(long param_1,long param_2,long param_3)

{
  ushort *puVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  
  if (*(int *)(param_1 + 0x170c) == 0) {
    uVar12 = *(uint *)(param_1 + 0x1734);
  }
  else {
    uVar14 = 0;
    do {
      lVar11 = *(long *)(param_1 + 0x1700);
      bVar3 = *(byte *)(lVar11 + (ulong)(uVar14 + 2));
      uVar9 = (uint)CONCAT11(*(undefined1 *)(lVar11 + (ulong)(uVar14 + 1)),
                             *(undefined1 *)(lVar11 + (ulong)uVar14));
      if (uVar9 == 0) {
        puVar1 = (ushort *)(param_2 + (ulong)bVar3 * 4);
        uVar12 = *(uint *)(param_1 + 0x1734);
        uVar4 = *puVar1;
        uVar9 = (uint)uVar4;
        uVar5 = puVar1[1];
        uVar10 = (uint)*(ushort *)(param_1 + 0x1730) | (uint)uVar4 << (ulong)(uVar12 & 0x1f);
        *(short *)(param_1 + 0x1730) = (short)uVar10;
        if ((int)(0x10 - (uint)uVar5) < (int)uVar12) {
          lVar11 = *(long *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar11 + 1;
          *(char *)(*(long *)(param_1 + 0x10) + lVar11) = (char)uVar10;
          lVar11 = *(long *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar11 + 1;
          *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar11) = *(undefined1 *)(param_1 + 0x1731);
          iVar2 = *(int *)(param_1 + 0x1734);
          iVar8 = (uint)uVar5 + iVar2;
LAB_03fde984:
          *(short *)(param_1 + 0x1730) = (short)(uVar9 >> (ulong)(0x10U - iVar2 & 0x1f));
          uVar12 = iVar8 - 0x10;
        }
        else {
          uVar12 = uVar12 + uVar5;
        }
LAB_03fde9a0:
        *(uint *)(param_1 + 0x1734) = uVar12;
      }
      else {
        uVar13 = (ulong)(byte)(&DAT_023aec78)[bVar3];
        uVar12 = *(uint *)(param_1 + 0x1734);
        lVar11 = param_2 + uVar13 * 4;
        uVar4 = *(ushort *)(lVar11 + 0x404);
        uVar5 = *(ushort *)(lVar11 + 0x406);
        uVar10 = (uint)*(ushort *)(param_1 + 0x1730) | (uint)uVar4 << (ulong)(uVar12 & 0x1f);
        *(short *)(param_1 + 0x1730) = (short)uVar10;
        if ((int)(0x10 - (uint)uVar5) < (int)uVar12) {
          lVar11 = *(long *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar11 + 1;
          *(char *)(*(long *)(param_1 + 0x10) + lVar11) = (char)uVar10;
          lVar11 = *(long *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar11 + 1;
          *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar11) = *(undefined1 *)(param_1 + 0x1731);
          uVar4 = uVar4 >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f);
          uVar10 = (uint)uVar4;
          uVar12 = ((uint)uVar5 + *(int *)(param_1 + 0x1734)) - 0x10;
          *(ushort *)(param_1 + 0x1730) = uVar4;
        }
        else {
          uVar12 = uVar12 + uVar5;
        }
        *(uint *)(param_1 + 0x1734) = uVar12;
        if (0xffffffffffffffeb < uVar13 - 0x1c) {
          iVar8 = *(int *)(&UNK_023af270 + uVar13 * 4);
          iVar2 = *(int *)(&UNK_023af3bc + uVar13 * 4);
          uVar6 = (uint)bVar3 - iVar2 << (ulong)(uVar12 & 0x1f);
          if (0x10 - iVar8 < (int)uVar12) {
            lVar11 = *(long *)(param_1 + 0x28);
            uVar10 = uVar10 | uVar6;
            *(short *)(param_1 + 0x1730) = (short)uVar10;
            *(long *)(param_1 + 0x28) = lVar11 + 1;
            *(char *)(*(long *)(param_1 + 0x10) + lVar11) = (char)uVar10;
            lVar11 = *(long *)(param_1 + 0x28);
            *(long *)(param_1 + 0x28) = lVar11 + 1;
            *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar11) = *(undefined1 *)(param_1 + 0x1731);
            uVar10 = ((uint)bVar3 - iVar2 & 0xffff) >>
                     (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f);
            uVar12 = (iVar8 + *(int *)(param_1 + 0x1734)) - 0x10;
          }
          else {
            uVar10 = uVar10 | uVar6;
            uVar12 = iVar8 + uVar12;
          }
          *(short *)(param_1 + 0x1730) = (short)uVar10;
          *(uint *)(param_1 + 0x1734) = uVar12;
        }
        uVar7 = uVar9 - 1;
        uVar6 = uVar7;
        if (0x100 < uVar9) {
          uVar6 = (uVar7 >> 7) + 0x100;
        }
        bVar3 = (&DAT_023aea78)[uVar6];
        uVar13 = (ulong)bVar3;
        puVar1 = (ushort *)(param_3 + uVar13 * 4);
        uVar4 = *puVar1;
        uVar5 = puVar1[1];
        uVar10 = uVar10 | (uint)uVar4 << (ulong)(uVar12 & 0x1f);
        *(short *)(param_1 + 0x1730) = (short)uVar10;
        if ((int)(0x10 - (uint)uVar5) < (int)uVar12) {
          lVar11 = *(long *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar11 + 1;
          *(char *)(*(long *)(param_1 + 0x10) + lVar11) = (char)uVar10;
          lVar11 = *(long *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar11 + 1;
          *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar11) = *(undefined1 *)(param_1 + 0x1731);
          uVar4 = uVar4 >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f);
          uVar10 = (uint)uVar4;
          uVar12 = ((uint)uVar5 + *(int *)(param_1 + 0x1734)) - 0x10;
          *(ushort *)(param_1 + 0x1730) = uVar4;
        }
        else {
          uVar12 = uVar12 + uVar5;
        }
        *(uint *)(param_1 + 0x1734) = uVar12;
        if (3 < bVar3) {
          iVar8 = *(int *)(&DAT_023af2e4 + uVar13 * 4);
          iVar2 = *(int *)(&UNK_023af430 + uVar13 * 4);
          uVar9 = uVar7 - iVar2 << (ulong)(uVar12 & 0x1f);
          if (0x10 - iVar8 < (int)uVar12) {
            lVar11 = *(long *)(param_1 + 0x28);
            uVar10 = uVar10 | uVar9;
            *(short *)(param_1 + 0x1730) = (short)uVar10;
            *(long *)(param_1 + 0x28) = lVar11 + 1;
            *(char *)(*(long *)(param_1 + 0x10) + lVar11) = (char)uVar10;
            lVar11 = *(long *)(param_1 + 0x28);
            *(long *)(param_1 + 0x28) = lVar11 + 1;
            *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar11) = *(undefined1 *)(param_1 + 0x1731);
            uVar9 = uVar7 - iVar2 & 0xffff;
            iVar2 = *(int *)(param_1 + 0x1734);
            iVar8 = iVar8 + iVar2;
            goto LAB_03fde984;
          }
          uVar12 = iVar8 + uVar12;
          *(ushort *)(param_1 + 0x1730) = (ushort)uVar10 | (ushort)uVar9;
          goto LAB_03fde9a0;
        }
      }
      uVar14 = uVar14 + 3;
    } while (uVar14 < *(uint *)(param_1 + 0x170c));
  }
  uVar4 = *(ushort *)(param_2 + 0x400);
  uVar5 = *(ushort *)(param_2 + 0x402);
  uVar14 = (uint)*(ushort *)(param_1 + 0x1730) | (uint)uVar4 << (ulong)(uVar12 & 0x1f);
  *(short *)(param_1 + 0x1730) = (short)uVar14;
  if ((int)(0x10 - (uint)uVar5) < (int)uVar12) {
    lVar11 = *(long *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar11 + 1;
    *(char *)(*(long *)(param_1 + 0x10) + lVar11) = (char)uVar14;
    lVar11 = *(long *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar11 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar11) = *(undefined1 *)(param_1 + 0x1731);
    iVar8 = (uint)uVar5 + *(int *)(param_1 + 0x1734) + -0x10;
    *(ushort *)(param_1 + 0x1730) = uVar4 >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f);
  }
  else {
    iVar8 = uVar12 + uVar5;
  }
  *(int *)(param_1 + 0x1734) = iVar8;
  return;
}


// rea decompile_all
// name: FUN_03fdb190
// address: 0x3fdb190
// body: available
// range: 0x3fdb190-0x3fdb3d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fdb190(long *param_1)

{
  ulong uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  byte bVar7;
  undefined2 uVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  size_t __n;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  ushort *puVar16;
  int iVar17;
  uint uVar18;
  
  uVar6 = *(uint *)(param_1 + 10);
  uVar10 = *(uint *)((long)param_1 + 0xb4);
  while( true ) {
    uVar18 = *(uint *)((long)param_1 + 0xac);
    iVar17 = (int)param_1[0xd] - (uVar10 + uVar18);
    if ((uVar6 - 0x106) + (int)param_1[10] <= uVar18) {
      memcpy((void *)param_1[0xc],(void *)(param_1[0xc] + (ulong)uVar6),(ulong)(uVar6 - iVar17));
      uVar18 = (int)*(undefined8 *)((long)param_1 + 0xac) - uVar6;
      param_1[0x13] = param_1[0x13] - (ulong)uVar6;
      *(ulong *)((long)param_1 + 0xac) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0xac) >> 0x20) - uVar6,uVar18);
      if (uVar18 < *(uint *)((long)param_1 + 0x172c)) {
        *(uint *)((long)param_1 + 0x172c) = uVar18;
      }
      uVar12 = (ulong)*(uint *)((long)param_1 + 0x84);
      puVar16 = (ushort *)(param_1[0xf] + uVar12 * 2);
      uVar10 = *(uint *)(param_1 + 10);
      do {
        puVar16 = puVar16 + -1;
        uVar2 = 0;
        if (uVar10 <= *puVar16) {
          uVar2 = *puVar16 - (short)uVar10;
        }
        uVar15 = (int)uVar12 - 1;
        uVar12 = (ulong)uVar15;
        *puVar16 = uVar2;
      } while (uVar15 != 0);
      puVar16 = (ushort *)(param_1[0xe] + (ulong)uVar10 * 2);
      uVar15 = uVar10;
      do {
        puVar16 = puVar16 + -1;
        uVar2 = 0;
        if (uVar10 <= *puVar16) {
          uVar2 = *puVar16 - (short)uVar10;
        }
        uVar15 = uVar15 - 1;
        *puVar16 = uVar2;
      } while (uVar15 != 0);
      iVar17 = uVar6 + iVar17;
    }
    if (*(int *)(*param_1 + 8) == 0) break;
    iVar9 = FUN_03fdcaa0(*param_1,param_1[0xc] + (ulong)uVar18 +
                                  (ulong)*(uint *)((long)param_1 + 0xb4),iVar17);
    iVar17 = *(int *)((long)param_1 + 0x172c);
    uVar10 = *(int *)((long)param_1 + 0xb4) + iVar9;
    *(uint *)((long)param_1 + 0xb4) = uVar10;
    if (2 < iVar17 + uVar10) {
      lVar13 = param_1[0xc];
      uVar3 = *(uint *)((long)param_1 + 0x8c);
      uVar4 = *(uint *)(param_1 + 0x12);
      uVar18 = *(int *)((long)param_1 + 0xac) - iVar17;
      bVar7 = *(byte *)(lVar13 + (ulong)uVar18);
      *(uint *)(param_1 + 0x10) = (uint)bVar7;
      uVar15 = ((uint)bVar7 << (ulong)(uVar4 & 0x1f) ^ (uint)*(byte *)(lVar13 + (ulong)(uVar18 + 1))
               ) & uVar3;
      uVar12 = (ulong)uVar15;
      *(uint *)(param_1 + 0x10) = uVar15;
      do {
        if (iVar17 == 0) break;
        lVar5 = param_1[0xf];
        iVar17 = iVar17 + -1;
        uVar15 = ((int)uVar12 << (ulong)(uVar4 & 0x1f) ^
                 (uint)*(byte *)(lVar13 + (ulong)(uVar18 + 2))) & uVar3;
        uVar12 = (ulong)uVar15;
        uVar8 = *(undefined2 *)(lVar5 + uVar12 * 2);
        *(uint *)(param_1 + 0x10) = uVar15;
        *(undefined2 *)(param_1[0xe] + (ulong)(*(uint *)(param_1 + 0xb) & uVar18) * 2) = uVar8;
        *(short *)(lVar5 + uVar12 * 2) = (short)uVar18;
        uVar18 = uVar18 + 1;
        *(int *)((long)param_1 + 0x172c) = iVar17;
      } while (2 < uVar10 + iVar17);
    }
    if ((0x105 < uVar10) || (*(int *)(*param_1 + 8) == 0)) break;
  }
  uVar11 = param_1[0x2e7];
  uVar14 = param_1[0xd];
  uVar12 = uVar14 - uVar11;
  if (uVar11 <= uVar14 && uVar12 != 0) {
    uVar1 = (ulong)*(uint *)((long)param_1 + 0xb4) + (ulong)*(uint *)((long)param_1 + 0xac);
    if (uVar11 < uVar1) {
      __n = uVar14 - uVar1;
      if (0x101 < __n) {
        __n = 0x102;
      }
      memset((void *)(param_1[0xc] + uVar1),0,__n);
      lVar13 = __n + uVar1;
    }
    else {
      uVar14 = (uVar1 + 0x102) - uVar11;
      if (uVar1 + 0x102 < uVar11 || uVar14 == 0) {
        return;
      }
      if (uVar12 <= uVar14) {
        uVar14 = uVar12;
      }
      memset((void *)(param_1[0xc] + uVar11),0,uVar14 & 0xffffffff);
      lVar13 = param_1[0x2e7] + uVar14;
    }
    param_1[0x2e7] = lVar13;
  }
  return;
}

